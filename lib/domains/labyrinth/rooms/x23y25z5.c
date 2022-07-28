inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 25, 5 }));
  set_short( "Corridor - x23y25z5" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y26z5.c",
  "south" : DIR+"/rooms/x23y24z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
