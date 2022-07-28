inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 43, 8 }));
  set_short( "Corridor - x7y43z8" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y44z8.c",
  "south" : DIR+"/rooms/x7y42z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
