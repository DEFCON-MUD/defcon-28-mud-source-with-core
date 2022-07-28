inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 54, 9 }));
  set_short( "Corridor - x15y54z9" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y54z9.c",
  "north" : DIR+"/rooms/x15y55z9.c",
  "south" : DIR+"/rooms/x15y53z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
