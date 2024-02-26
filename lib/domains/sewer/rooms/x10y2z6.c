inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 2, 6 }));
  set_short( "Corridor - x10y2z6" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y2z6.c",
  "east" : DIR+"/rooms/x11y2z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
