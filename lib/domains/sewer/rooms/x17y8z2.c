inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 8, 2 }));
  set_short( "Hallway - x17y8z2" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y9z2.c",
  "south" : DIR+"/rooms/x17y7z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
