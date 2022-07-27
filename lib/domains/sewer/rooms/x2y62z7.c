inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 62, 7 }));
  set_short( "Corridor - x2y62z7" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y62z7.c",
  "east" : DIR+"/rooms/x3y62z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
