inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 36, 6 }));
  set_short( "Corridor - x45y36z6" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y36z6.c",
  "north" : DIR+"/rooms/x45y37z6.c",
  "south" : DIR+"/rooms/x45y35z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
