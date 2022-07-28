inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 24, 2 }));
  set_short( "Corridor - x8y24z2" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y24z2.c",
  "east" : DIR+"/rooms/x9y24z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
