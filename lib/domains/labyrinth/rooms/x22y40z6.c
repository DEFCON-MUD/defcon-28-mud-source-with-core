inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 40, 6 }));
  set_short( "Passage - x22y40z6" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y40z6.c",
  "east" : DIR+"/rooms/x23y40z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
