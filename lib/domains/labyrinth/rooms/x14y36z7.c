inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 36, 7 }));
  set_short( "Hallway - x14y36z7" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y36z7.c",
  "east" : DIR+"/rooms/x15y36z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
