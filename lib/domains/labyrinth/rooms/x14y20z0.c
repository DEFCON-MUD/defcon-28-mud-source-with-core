inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 20, 0 }));
  set_short( "Hallway - x14y20z0" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y20z0.c",
  "east" : DIR+"/rooms/x15y20z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
