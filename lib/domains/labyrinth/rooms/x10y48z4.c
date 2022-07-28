inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 48, 4 }));
  set_short( "Hallway - x10y48z4" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y48z4.c",
  "east" : DIR+"/rooms/x11y48z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
