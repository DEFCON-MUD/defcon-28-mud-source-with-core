inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 24, 0 }));
  set_short( "Hallway - x52y24z0" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y24z0.c",
  "east" : DIR+"/rooms/x53y24z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
