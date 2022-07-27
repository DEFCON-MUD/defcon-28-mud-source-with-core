inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 8, 9 }));
  set_short( "Hallway - x31y8z9" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y8z9.c",
  "east" : DIR+"/rooms/x32y8z9.c",
  "north" : DIR+"/rooms/x31y9z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
