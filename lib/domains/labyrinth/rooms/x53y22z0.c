inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 0 }));
  set_short( "Corridor - x53y22z0" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y22z0.c",
  "east" : DIR+"/rooms/x54y22z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
