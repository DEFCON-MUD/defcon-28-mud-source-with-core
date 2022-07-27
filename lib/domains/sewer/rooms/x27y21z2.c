inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 21, 2 }));
  set_short( "Hallway - x27y21z2" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y22z2.c",
  "south" : DIR+"/rooms/x27y20z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
