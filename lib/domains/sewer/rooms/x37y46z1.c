inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 46, 1 }));
  set_short( "Corridor - x37y46z1" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y46z1.c",
  "north" : DIR+"/rooms/x37y47z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
