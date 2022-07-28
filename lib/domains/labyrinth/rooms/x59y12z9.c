inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 12, 9 }));
  set_short( "Passage - x59y12z9" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y12z9.c",
  "south" : DIR+"/rooms/x59y11z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
