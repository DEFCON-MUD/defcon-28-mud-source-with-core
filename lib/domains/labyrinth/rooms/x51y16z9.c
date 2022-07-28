inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 16, 9 }));
  set_short( "Hallway - x51y16z9" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y16z9.c",
  "south" : DIR+"/rooms/x51y15z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
