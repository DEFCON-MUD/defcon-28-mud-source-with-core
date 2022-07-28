inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 8, 8 }));
  set_short( "Hallway - x35y8z8" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y8z8.c",
  "east" : DIR+"/rooms/x36y8z8.c",
  "south" : DIR+"/rooms/x35y7z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
