inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 48, 0 }));
  set_short( "Passage - x57y48z0" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y48z0.c",
  "north" : DIR+"/rooms/x57y49z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
