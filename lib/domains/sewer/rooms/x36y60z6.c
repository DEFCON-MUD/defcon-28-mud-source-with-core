inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 60, 6 }));
  set_short( "Hallway - x36y60z6" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y60z6.c",
  "east" : DIR+"/rooms/x37y60z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
