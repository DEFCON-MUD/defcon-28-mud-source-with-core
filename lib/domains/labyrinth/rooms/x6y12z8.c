inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 12, 8 }));
  set_short( "Hallway - x6y12z8" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y12z8.c",
  "east" : DIR+"/rooms/x7y12z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
