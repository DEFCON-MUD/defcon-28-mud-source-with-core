inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 45, 6 }));
  set_short( "Passage - x5y45z6" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y46z6.c",
  "south" : DIR+"/rooms/x5y44z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
