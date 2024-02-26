inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 2 }));
  set_short( "Corridor - x5y38z2" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y38z2.c",
  "south" : DIR+"/rooms/x5y37z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
