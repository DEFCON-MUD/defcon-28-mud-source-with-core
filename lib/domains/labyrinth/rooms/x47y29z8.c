inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 29, 8 }));
  set_short( "Hallway - x47y29z8" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y30z8.c",
  "south" : DIR+"/rooms/x47y28z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
