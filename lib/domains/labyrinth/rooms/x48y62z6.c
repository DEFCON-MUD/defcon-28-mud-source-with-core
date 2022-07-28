inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 62, 6 }));
  set_short( "Passage - x48y62z6" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y62z6.c",
  "east" : DIR+"/rooms/x49y62z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
