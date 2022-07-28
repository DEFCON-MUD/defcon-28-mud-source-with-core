inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 36, 6 }));
  set_short( "Corridor - x43y36z6" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y36z6.c",
  "north" : DIR+"/rooms/x43y37z6.c",
  "south" : DIR+"/rooms/x43y35z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
