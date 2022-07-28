inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 2 }));
  set_short( "Corridor - x7y14z2" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y14z2.c",
  "south" : DIR+"/rooms/x7y13z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
