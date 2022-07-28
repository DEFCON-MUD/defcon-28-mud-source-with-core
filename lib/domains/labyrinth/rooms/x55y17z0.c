inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 17, 0 }));
  set_short( "Corridor - x55y17z0" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y18z0.c",
  "south" : DIR+"/rooms/x55y16z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
