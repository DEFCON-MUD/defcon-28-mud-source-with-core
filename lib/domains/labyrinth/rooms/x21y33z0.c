inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 33, 0 }));
  set_short( "Passage - x21y33z0" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y34z0.c",
  "south" : DIR+"/rooms/x21y32z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
