inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 4, 2 }));
  set_short( "Corridor - x6y4z2" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y4z2.c",
  "east" : DIR+"/rooms/x7y4z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
