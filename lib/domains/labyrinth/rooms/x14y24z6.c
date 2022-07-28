inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 24, 6 }));
  set_short( "Corridor - x14y24z6" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y24z6.c",
  "east" : DIR+"/rooms/x15y24z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
