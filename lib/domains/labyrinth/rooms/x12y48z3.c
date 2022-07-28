inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 48, 3 }));
  set_short( "Passage - x12y48z3" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y48z3.c",
  "east" : DIR+"/rooms/x13y48z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
