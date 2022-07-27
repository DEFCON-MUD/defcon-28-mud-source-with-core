inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 46, 6 }));
  set_short( "Passage - x2y46z6" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y46z6.c",
  "east" : DIR+"/rooms/x3y46z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
