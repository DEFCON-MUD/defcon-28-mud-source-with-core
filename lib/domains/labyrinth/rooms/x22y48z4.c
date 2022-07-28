inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 48, 4 }));
  set_short( "Corridor - x22y48z4" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y48z4.c",
  "east" : DIR+"/rooms/x23y48z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
