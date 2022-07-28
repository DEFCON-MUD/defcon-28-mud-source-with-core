inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 59, 4 }));
  set_short( "Corridor - x21y59z4" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y60z4.c",
  "south" : DIR+"/rooms/x21y58z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
