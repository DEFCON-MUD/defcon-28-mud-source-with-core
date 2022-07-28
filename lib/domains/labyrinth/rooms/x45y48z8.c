inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 48, 8 }));
  set_short( "Corridor - x45y48z8" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y48z8.c",
  "north" : DIR+"/rooms/x45y49z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
