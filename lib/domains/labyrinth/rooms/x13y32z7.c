inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 32, 7 }));
  set_short( "Passage - x13y32z7" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y32z7.c",
  "north" : DIR+"/rooms/x13y33z7.c",
  "south" : DIR+"/rooms/x13y31z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
