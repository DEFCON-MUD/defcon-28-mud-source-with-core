inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 22, 0 }));
  set_short( "Corridor - x48y22z0" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y22z0.c",
  "east" : DIR+"/rooms/x49y22z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
