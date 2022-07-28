inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 54, 4 }));
  set_short( "Corridor - x53y54z4" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y54z4.c",
  "east" : DIR+"/rooms/x54y54z4.c",
  "north" : DIR+"/rooms/x53y55z4.c",
  "south" : DIR+"/rooms/x53y53z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
