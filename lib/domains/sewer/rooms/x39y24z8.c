inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 24, 8 }));
  set_short( "Hallway - x39y24z8" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y24z8.c",
  "north" : DIR+"/rooms/x39y25z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
