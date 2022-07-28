inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 36, 3 }));
  set_short( "Corridor - x60y36z3" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y36z3.c",
  "east" : DIR+"/rooms/x61y36z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
