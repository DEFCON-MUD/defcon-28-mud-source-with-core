inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 24, 1 }));
  set_short( "Corridor - x39y24z1" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y24z1.c",
  "north" : DIR+"/rooms/x39y25z1.c",
  "south" : DIR+"/rooms/x39y23z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
