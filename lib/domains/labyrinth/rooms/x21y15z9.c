inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 15, 9 }));
  set_short( "Corridor - x21y15z9" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y16z9.c",
  "south" : DIR+"/rooms/x21y14z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
