inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 56, 0 }));
  set_short( "Hallway - x22y56z0" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y56z0.c",
  "east" : DIR+"/rooms/x23y56z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
