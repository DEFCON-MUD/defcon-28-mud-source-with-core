inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 41, 9 }));
  set_short( "Passage - x37y41z9" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y42z9.c",
  "south" : DIR+"/rooms/x37y40z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
