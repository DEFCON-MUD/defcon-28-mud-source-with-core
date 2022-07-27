inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 13, 9 }));
  set_short( "Passage - x11y13z9" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y14z9.c",
  "south" : DIR+"/rooms/x11y12z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
