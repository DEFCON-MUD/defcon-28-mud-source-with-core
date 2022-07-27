inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 24, 1 }));
  set_short( "Corridor - x21y24z1" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y24z1.c",
  "north" : DIR+"/rooms/x21y25z1.c",
  "south" : DIR+"/rooms/x21y23z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
