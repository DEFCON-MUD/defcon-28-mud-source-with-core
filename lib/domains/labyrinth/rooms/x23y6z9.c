inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 9 }));
  set_short( "Corridor - x23y6z9" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y6z9.c",
  "north" : DIR+"/rooms/x23y7z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
