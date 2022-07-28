inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 56, 3 }));
  set_short( "Hallway - x52y56z3" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y56z3.c",
  "east" : DIR+"/rooms/x53y56z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
