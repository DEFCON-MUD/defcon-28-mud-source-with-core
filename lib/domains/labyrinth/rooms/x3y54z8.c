inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 54, 8 }));
  set_short( "Hallway - x3y54z8" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y54z8.c",
  "east" : DIR+"/rooms/x4y54z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
