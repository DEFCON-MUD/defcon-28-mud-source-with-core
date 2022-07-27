inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 14, 2 }));
  set_short( "Corridor - x5y14z2" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y14z2.c",
  "north" : DIR+"/rooms/x5y15z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
