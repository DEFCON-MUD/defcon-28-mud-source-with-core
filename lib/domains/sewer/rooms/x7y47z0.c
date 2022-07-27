inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 47, 0 }));
  set_short( "Passage - x7y47z0" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y48z0.c",
  "south" : DIR+"/rooms/x7y46z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
