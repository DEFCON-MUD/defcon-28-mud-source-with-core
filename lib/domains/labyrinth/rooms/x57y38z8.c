inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 38, 8 }));
  set_short( "Corridor - x57y38z8" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y38z8.c",
  "south" : DIR+"/rooms/x57y37z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
